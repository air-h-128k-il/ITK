/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#include "itkTestingExtractSliceImageFilter.h"

namespace itk
{
namespace Testing
{
/** Print enum values */
std::ostream &
operator<<(std::ostream & out, const ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy value)
{
  return out << [value] {
    switch (value)
    {
      case ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::DIRECTIONCOLLAPSETOUNKOWN:
        return "itk::ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::"
               "DIRECTIONCOLLAPSETOUNKOWN";
      case ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::DIRECTIONCOLLAPSETOIDENTITY:
        return "itk::ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::"
               "DIRECTIONCOLLAPSETOIDENTITY";
      case ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::DIRECTIONCOLLAPSETOSUBMATRIX:
        return "itk::ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::"
               "DIRECTIONCOLLAPSETOSUBMATRIX";
      case ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::DIRECTIONCOLLAPSETOGUESS:
        return "itk::ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy::"
               "DIRECTIONCOLLAPSETOGUESS";
      default:
        return "INVALID VALUE FOR itk::ExtractSliceImageFilterEnums::TestExtractSliceImageFilterCollapseStrategy";
    }
  }();
}
} // end namespace Testing
} // end namespace itk
