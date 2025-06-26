/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAttributeCondition.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides the configuration information for invoking a Lambda function in
   * Lambda to alter document metadata and content when ingesting documents into
   * Amazon Q Business.</p> <p>You can configure your Lambda function using the
   * <code>PreExtractionHookConfiguration</code> parameter if you want to apply
   * advanced alterations on the original or raw documents.</p> <p>If you want to
   * apply advanced alterations on the Amazon Q Business structured documents, you
   * must configure your Lambda function using
   * <code>PostExtractionHookConfiguration</code>.</p> <p>You can only invoke one
   * Lambda function. However, this function can invoke other functions it
   * requires.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/custom-document-enrichment.html">Custom
   * document enrichment</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/HookConfiguration">AWS
   * API Reference</a></p>
   */
  class HookConfiguration
  {
  public:
    AWS_QBUSINESS_API HookConfiguration() = default;
    AWS_QBUSINESS_API HookConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API HookConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition used for when a Lambda function should be invoked.</p> <p>For
     * example, you can specify a condition that if there are empty date-time values,
     * then Amazon Q Business should invoke a function that inserts the current
     * date-time.</p>
     */
    inline const DocumentAttributeCondition& GetInvocationCondition() const { return m_invocationCondition; }
    inline bool InvocationConditionHasBeenSet() const { return m_invocationConditionHasBeenSet; }
    template<typename InvocationConditionT = DocumentAttributeCondition>
    void SetInvocationCondition(InvocationConditionT&& value) { m_invocationConditionHasBeenSet = true; m_invocationCondition = std::forward<InvocationConditionT>(value); }
    template<typename InvocationConditionT = DocumentAttributeCondition>
    HookConfiguration& WithInvocationCondition(InvocationConditionT&& value) { SetInvocationCondition(std::forward<InvocationConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function during ingestion. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/cde-lambda-operations.html">Using
     * Lambda functions for Amazon Q Business document enrichment</a>.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    HookConfiguration& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stores the original, raw documents or the structured, parsed documents before
     * and after altering them. For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/cde-lambda-operations.html#cde-lambda-operations-data-contracts">Data
     * contracts for Lambda functions</a>.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    HookConfiguration& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a role with permission to run
     * <code>PreExtractionHookConfiguration</code> and
     * <code>PostExtractionHookConfiguration</code> for altering document metadata and
     * content during the document ingestion process.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    HookConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    DocumentAttributeCondition m_invocationCondition;
    bool m_invocationConditionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
