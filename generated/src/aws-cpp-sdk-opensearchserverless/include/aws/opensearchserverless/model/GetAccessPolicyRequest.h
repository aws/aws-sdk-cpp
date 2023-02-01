/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/AccessPolicyType.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class GetAccessPolicyRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessPolicy"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the access policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the access policy.</p>
     */
    inline GetAccessPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline GetAccessPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the access policy.</p>
     */
    inline GetAccessPolicyRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline const AccessPolicyType& GetType() const{ return m_type; }

    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline void SetType(const AccessPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline void SetType(AccessPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline GetAccessPolicyRequest& WithType(const AccessPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>Tye type of policy. Currently the only supported value is
     * <code>data</code>.</p>
     */
    inline GetAccessPolicyRequest& WithType(AccessPolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccessPolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
