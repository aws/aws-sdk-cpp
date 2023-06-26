/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The details of the log provider for a third-party custom
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceProvider">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceProvider
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceProvider();
    AWS_SECURITYLAKE_API CustomLogSourceProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline CustomLogSourceProvider& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline CustomLogSourceProvider& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline CustomLogSourceProvider& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline CustomLogSourceProvider& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline CustomLogSourceProvider& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to be used by the entity putting logs into your
     * custom source partition. Security Lake will apply the correct access policies to
     * this role, but you must first manually create the trust policy for this role.
     * The IAM role name must start with the text 'Security Lake'. The IAM role must
     * trust the <code>logProviderAccountId</code> to assume the role.</p>
     */
    inline CustomLogSourceProvider& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
