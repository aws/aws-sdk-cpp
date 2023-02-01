/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The policy to create or update. For example, the following policy grants a
     * user authorization to restore a snapshot.</p> <p> <code>"{\"Version\":
     * \"2012-10-17\", \"Statement\" : [{ \"Sid\": \"AllowUserRestoreFromSnapshot\",
     * \"Principal\":{\"AWS\": [\"739247239426\"]}, \"Action\":
     * [\"redshift-serverless:RestoreFromSnapshot\"] , \"Effect\": \"Allow\"
     * }]}"</code> </p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account to create or update a resource
     * policy for.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
