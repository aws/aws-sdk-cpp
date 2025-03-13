/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a <code>Lambda Invoke</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/LambdaInvokeOperation">AWS
   * API Reference</a></p>
   */
  class LambdaInvokeOperation
  {
  public:
    AWS_S3CONTROL_API LambdaInvokeOperation() = default;
    AWS_S3CONTROL_API LambdaInvokeOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LambdaInvokeOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    LambdaInvokeOperation& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/automate-object-processing-in-amazon-s3-directory-buckets-with-s3-batch-operations-and-aws-lambda/">Automate
     * object processing in Amazon S3 directory buckets with S3 Batch Operations and
     * Lambda</a> in the <i>Amazon Web Services Storage Blog</i>.</p> 
     * <p>Ensure that your Lambda function code expects
     * <code>InvocationSchemaVersion</code> <b>2.0</b> and uses bucket name rather than
     * bucket ARN. If the <code>InvocationSchemaVersion</code> does not match what your
     * Lambda function expects, your function might not work as expected.</p>
     *   <p> <b>Directory buckets</b> - To initiate Amazon Web
     * Services Lambda function to perform custom actions on objects in directory
     * buckets, you must specify <code>2.0</code>.</p> 
     */
    inline const Aws::String& GetInvocationSchemaVersion() const { return m_invocationSchemaVersion; }
    inline bool InvocationSchemaVersionHasBeenSet() const { return m_invocationSchemaVersionHasBeenSet; }
    template<typename InvocationSchemaVersionT = Aws::String>
    void SetInvocationSchemaVersion(InvocationSchemaVersionT&& value) { m_invocationSchemaVersionHasBeenSet = true; m_invocationSchemaVersion = std::forward<InvocationSchemaVersionT>(value); }
    template<typename InvocationSchemaVersionT = Aws::String>
    LambdaInvokeOperation& WithInvocationSchemaVersion(InvocationSchemaVersionT&& value) { SetInvocationSchemaVersion(std::forward<InvocationSchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/automate-object-processing-in-amazon-s3-directory-buckets-with-s3-batch-operations-and-aws-lambda/">Automate
     * object processing in Amazon S3 directory buckets with S3 Batch Operations and
     * Lambda</a> in the <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserArguments() const { return m_userArguments; }
    inline bool UserArgumentsHasBeenSet() const { return m_userArgumentsHasBeenSet; }
    template<typename UserArgumentsT = Aws::Map<Aws::String, Aws::String>>
    void SetUserArguments(UserArgumentsT&& value) { m_userArgumentsHasBeenSet = true; m_userArguments = std::forward<UserArgumentsT>(value); }
    template<typename UserArgumentsT = Aws::Map<Aws::String, Aws::String>>
    LambdaInvokeOperation& WithUserArguments(UserArgumentsT&& value) { SetUserArguments(std::forward<UserArgumentsT>(value)); return *this;}
    template<typename UserArgumentsKeyT = Aws::String, typename UserArgumentsValueT = Aws::String>
    LambdaInvokeOperation& AddUserArguments(UserArgumentsKeyT&& key, UserArgumentsValueT&& value) {
      m_userArgumentsHasBeenSet = true; m_userArguments.emplace(std::forward<UserArgumentsKeyT>(key), std::forward<UserArgumentsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::String m_invocationSchemaVersion;
    bool m_invocationSchemaVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userArguments;
    bool m_userArgumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
