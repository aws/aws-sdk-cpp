/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The parameters for a <code>LAMBDA</code> task type.</p> <p>For information
   * about specifying and updating task parameters, see
   * <a>RegisterTaskWithMaintenanceWindow</a> and
   * <a>UpdateMaintenanceWindowTask</a>.</p>  <p> <code>LoggingInfo</code> has
   * been deprecated. To specify an Amazon Simple Storage Service (Amazon S3) bucket
   * to contain logs, instead use the <code>OutputS3BucketName</code> and
   * <code>OutputS3KeyPrefix</code> options in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Amazon Web Services Systems Manager handles these options for the supported
   * maintenance window task types, see
   * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>
   * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
   * to a task when it runs, instead use the <code>Parameters</code> option in the
   * <code>TaskInvocationParameters</code> structure. For information about how
   * Systems Manager handles these options for the supported maintenance window task
   * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> <p>For Lambda
   * tasks, Systems Manager ignores any values specified for TaskParameters and
   * LoggingInfo.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowLambdaParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowLambdaParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowLambdaParameters() = default;
    AWS_SSM_API MaintenanceWindowLambdaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowLambdaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Pass client-specific information to the Lambda function that you are
     * invoking. You can then process the client information in your Lambda function as
     * you choose through the context variable.</p>
     */
    inline const Aws::String& GetClientContext() const { return m_clientContext; }
    inline bool ClientContextHasBeenSet() const { return m_clientContextHasBeenSet; }
    template<typename ClientContextT = Aws::String>
    void SetClientContext(ClientContextT&& value) { m_clientContextHasBeenSet = true; m_clientContext = std::forward<ClientContextT>(value); }
    template<typename ClientContextT = Aws::String>
    MaintenanceWindowLambdaParameters& WithClientContext(ClientContextT&& value) { SetClientContext(std::forward<ClientContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) Specify an Lambda function version or alias name. If you specify a
     * function version, the operation uses the qualified function Amazon Resource Name
     * (ARN) to invoke a specific Lambda function. If you specify an alias name, the
     * operation uses the alias ARN to invoke the Lambda function version to which the
     * alias points.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    MaintenanceWindowLambdaParameters& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON to provide to your Lambda function as input.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Utils::CryptoBuffer>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Utils::CryptoBuffer>
    MaintenanceWindowLambdaParameters& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientContext;
    bool m_clientContextHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_payload{};
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
