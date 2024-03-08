/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
   * <p>Information about the basic authentication credentials used to configure a
   * plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BasicAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class BasicAuthConfiguration
  {
  public:
    AWS_QBUSINESS_API BasicAuthConfiguration();
    AWS_QBUSINESS_API BasicAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API BasicAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline BasicAuthConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline BasicAuthConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role used by Amazon Q to access the basic authentication
     * credentials stored in a Secrets Manager secret.</p>
     */
    inline BasicAuthConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline BasicAuthConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline BasicAuthConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret that stores the basic authentication
     * credentials used for plugin configuration..</p>
     */
    inline BasicAuthConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
