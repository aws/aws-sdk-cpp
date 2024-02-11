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
    AWS_S3CONTROL_API LambdaInvokeOperation();
    AWS_S3CONTROL_API LambdaInvokeOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API LambdaInvokeOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the Lambda function that the specified job
     * will invoke on every object in the manifest.</p>
     */
    inline LambdaInvokeOperation& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline const Aws::String& GetInvocationSchemaVersion() const{ return m_invocationSchemaVersion; }

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline bool InvocationSchemaVersionHasBeenSet() const { return m_invocationSchemaVersionHasBeenSet; }

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline void SetInvocationSchemaVersion(const Aws::String& value) { m_invocationSchemaVersionHasBeenSet = true; m_invocationSchemaVersion = value; }

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline void SetInvocationSchemaVersion(Aws::String&& value) { m_invocationSchemaVersionHasBeenSet = true; m_invocationSchemaVersion = std::move(value); }

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline void SetInvocationSchemaVersion(const char* value) { m_invocationSchemaVersionHasBeenSet = true; m_invocationSchemaVersion.assign(value); }

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline LambdaInvokeOperation& WithInvocationSchemaVersion(const Aws::String& value) { SetInvocationSchemaVersion(value); return *this;}

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline LambdaInvokeOperation& WithInvocationSchemaVersion(Aws::String&& value) { SetInvocationSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the schema version for the payload that Batch Operations sends when
     * invoking an Lambda function. Version <code>1.0</code> is the default. Version
     * <code>2.0</code> is required when you use Batch Operations to invoke Lambda
     * functions that act on directory buckets, or if you need to specify
     * <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>  <p>Ensure that your
     * Lambda function code expects <code>InvocationSchemaVersion</code> <b>2.0</b> and
     * uses bucket name rather than bucket ARN. If the
     * <code>InvocationSchemaVersion</code> does not match what your Lambda function
     * expects, your function might not work as expected.</p>   <p>
     * <b>Directory buckets</b> - To initiate Amazon Web Services Lambda function to
     * perform custom actions on objects in directory buckets, you must specify
     * <code>2.0</code>.</p> 
     */
    inline LambdaInvokeOperation& WithInvocationSchemaVersion(const char* value) { SetInvocationSchemaVersion(value); return *this;}


    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserArguments() const{ return m_userArguments; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline bool UserArgumentsHasBeenSet() const { return m_userArgumentsHasBeenSet; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline void SetUserArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_userArgumentsHasBeenSet = true; m_userArguments = value; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline void SetUserArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_userArgumentsHasBeenSet = true; m_userArguments = std::move(value); }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& WithUserArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetUserArguments(value); return *this;}

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& WithUserArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetUserArguments(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(const Aws::String& key, const Aws::String& value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(Aws::String&& key, const Aws::String& value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(const Aws::String& key, Aws::String&& value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(Aws::String&& key, Aws::String&& value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(const char* key, Aws::String&& value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(Aws::String&& key, const char* value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs that are passed in the payload that Batch Operations sends
     * when invoking an Lambda function. You must specify
     * <code>InvocationSchemaVersion</code> <b>2.0</b> for <code>LambdaInvoke</code>
     * operations that include <code>UserArguments</code>. For more information, see <a
     * href="https://aws.amazon.com/blogs/storage/using-lambda-with-s3-batch-operations-and-s3-express-one-zone/">Using
     * Lambda with Amazon S3 Batch Operations and Amazon S3 Express One Zone</a> in the
     * <i>Amazon Web Services Storage Blog</i>.</p>
     */
    inline LambdaInvokeOperation& AddUserArguments(const char* key, const char* value) { m_userArgumentsHasBeenSet = true; m_userArguments.emplace(key, value); return *this; }

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
