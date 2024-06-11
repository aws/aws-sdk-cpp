/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>Gets information about a specific traffic policy version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyRequest">AWS
   * API Reference</a></p>
   */
  class GetTrafficPolicyRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetTrafficPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrafficPolicy"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the traffic policy that you want to get information about.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetTrafficPolicyRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetTrafficPolicyRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetTrafficPolicyRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the traffic policy that you want to get information
     * about.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline GetTrafficPolicyRequest& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
