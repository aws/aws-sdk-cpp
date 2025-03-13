/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/PredefinedResolution.h>
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
   * <p>The input structure representing Output Resolution for Stacking
   * Operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/OutputResolutionStackInput">AWS
   * API Reference</a></p>
   */
  class OutputResolutionStackInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline PredefinedResolution GetPredefined() const { return m_predefined; }
    inline bool PredefinedHasBeenSet() const { return m_predefinedHasBeenSet; }
    inline void SetPredefined(PredefinedResolution value) { m_predefinedHasBeenSet = true; m_predefined = value; }
    inline OutputResolutionStackInput& WithPredefined(PredefinedResolution value) { SetPredefined(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline const UserDefined& GetUserDefined() const { return m_userDefined; }
    inline bool UserDefinedHasBeenSet() const { return m_userDefinedHasBeenSet; }
    template<typename UserDefinedT = UserDefined>
    void SetUserDefined(UserDefinedT&& value) { m_userDefinedHasBeenSet = true; m_userDefined = std::forward<UserDefinedT>(value); }
    template<typename UserDefinedT = UserDefined>
    OutputResolutionStackInput& WithUserDefined(UserDefinedT&& value) { SetUserDefined(std::forward<UserDefinedT>(value)); return *this;}
    ///@}
  private:

    PredefinedResolution m_predefined{PredefinedResolution::NOT_SET};
    bool m_predefinedHasBeenSet = false;

    UserDefined m_userDefined;
    bool m_userDefinedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
