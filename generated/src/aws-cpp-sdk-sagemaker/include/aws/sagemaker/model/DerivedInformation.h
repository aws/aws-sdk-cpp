/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information that SageMaker Neo automatically derived about the
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DerivedInformation">AWS
   * API Reference</a></p>
   */
  class DerivedInformation
  {
  public:
    AWS_SAGEMAKER_API DerivedInformation();
    AWS_SAGEMAKER_API DerivedInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DerivedInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline const Aws::String& GetDerivedDataInputConfig() const{ return m_derivedDataInputConfig; }

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline bool DerivedDataInputConfigHasBeenSet() const { return m_derivedDataInputConfigHasBeenSet; }

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline void SetDerivedDataInputConfig(const Aws::String& value) { m_derivedDataInputConfigHasBeenSet = true; m_derivedDataInputConfig = value; }

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline void SetDerivedDataInputConfig(Aws::String&& value) { m_derivedDataInputConfigHasBeenSet = true; m_derivedDataInputConfig = std::move(value); }

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline void SetDerivedDataInputConfig(const char* value) { m_derivedDataInputConfigHasBeenSet = true; m_derivedDataInputConfig.assign(value); }

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline DerivedInformation& WithDerivedDataInputConfig(const Aws::String& value) { SetDerivedDataInputConfig(value); return *this;}

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline DerivedInformation& WithDerivedDataInputConfig(Aws::String&& value) { SetDerivedDataInputConfig(std::move(value)); return *this;}

    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline DerivedInformation& WithDerivedDataInputConfig(const char* value) { SetDerivedDataInputConfig(value); return *this;}

  private:

    Aws::String m_derivedDataInputConfig;
    bool m_derivedDataInputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
