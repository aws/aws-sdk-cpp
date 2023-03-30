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
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput();
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API OutputResolutionStackInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline const PredefinedResolution& GetPredefined() const{ return m_predefined; }

    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline bool PredefinedHasBeenSet() const { return m_predefinedHasBeenSet; }

    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline void SetPredefined(const PredefinedResolution& value) { m_predefinedHasBeenSet = true; m_predefined = value; }

    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline void SetPredefined(PredefinedResolution&& value) { m_predefinedHasBeenSet = true; m_predefined = std::move(value); }

    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline OutputResolutionStackInput& WithPredefined(const PredefinedResolution& value) { SetPredefined(value); return *this;}

    /**
     * <p>A string value representing Predefined Output Resolution for a stacking
     * operation. Allowed values are <code>HIGHEST</code>, <code>LOWEST</code>, and
     * <code>AVERAGE</code>.</p>
     */
    inline OutputResolutionStackInput& WithPredefined(PredefinedResolution&& value) { SetPredefined(std::move(value)); return *this;}


    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline const UserDefined& GetUserDefined() const{ return m_userDefined; }

    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline bool UserDefinedHasBeenSet() const { return m_userDefinedHasBeenSet; }

    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline void SetUserDefined(const UserDefined& value) { m_userDefinedHasBeenSet = true; m_userDefined = value; }

    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline void SetUserDefined(UserDefined&& value) { m_userDefinedHasBeenSet = true; m_userDefined = std::move(value); }

    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline OutputResolutionStackInput& WithUserDefined(const UserDefined& value) { SetUserDefined(value); return *this;}

    /**
     * <p>The structure representing User Output Resolution for a Stacking operation
     * defined as a value and unit.</p>
     */
    inline OutputResolutionStackInput& WithUserDefined(UserDefined&& value) { SetUserDefined(std::move(value)); return *this;}

  private:

    PredefinedResolution m_predefined;
    bool m_predefinedHasBeenSet = false;

    UserDefined m_userDefined;
    bool m_userDefinedHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
