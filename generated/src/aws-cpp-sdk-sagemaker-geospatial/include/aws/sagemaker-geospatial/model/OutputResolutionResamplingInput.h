/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/UserDefined.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>OutputResolution Configuration indicating the target resolution for the
   * output of Resampling operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/OutputResolutionResamplingInput">AWS
   * API Reference</a></p>
   */
  class OutputResolutionResamplingInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionResamplingInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionResamplingInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionResamplingInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>User Defined Resolution for the output of Resampling operation defined by
     * value and unit.</p>
     */
    inline const UserDefined& GetUserDefined() const { return m_userDefined; }
    inline bool UserDefinedHasBeenSet() const { return m_userDefinedHasBeenSet; }
    template<typename UserDefinedT = UserDefined>
    void SetUserDefined(UserDefinedT&& value) { m_userDefinedHasBeenSet = true; m_userDefined = std::forward<UserDefinedT>(value); }
    template<typename UserDefinedT = UserDefined>
    OutputResolutionResamplingInput& WithUserDefined(UserDefinedT&& value) { SetUserDefined(std::forward<UserDefinedT>(value)); return *this;}
    ///@}
  private:

    UserDefined m_userDefined;
    bool m_userDefinedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
