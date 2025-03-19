/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Contains information about attribute-based access control (ABAC) for a
   * training job. The session chaining configuration uses Amazon Security Token
   * Service (STS) for your training job to request temporary, limited-privilege
   * credentials to tenants. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-access-training-data.html#model-access-training-data-abac">Attribute-based
   * access control (ABAC) for multi-tenancy training</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SessionChainingConfig">AWS
   * API Reference</a></p>
   */
  class SessionChainingConfig
  {
  public:
    AWS_SAGEMAKER_API SessionChainingConfig() = default;
    AWS_SAGEMAKER_API SessionChainingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SessionChainingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Set to <code>True</code> to allow SageMaker to extract session tags from a
     * training job creation role and reuse these tags when assuming the training job
     * execution role.</p>
     */
    inline bool GetEnableSessionTagChaining() const { return m_enableSessionTagChaining; }
    inline bool EnableSessionTagChainingHasBeenSet() const { return m_enableSessionTagChainingHasBeenSet; }
    inline void SetEnableSessionTagChaining(bool value) { m_enableSessionTagChainingHasBeenSet = true; m_enableSessionTagChaining = value; }
    inline SessionChainingConfig& WithEnableSessionTagChaining(bool value) { SetEnableSessionTagChaining(value); return *this;}
    ///@}
  private:

    bool m_enableSessionTagChaining{false};
    bool m_enableSessionTagChainingHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
