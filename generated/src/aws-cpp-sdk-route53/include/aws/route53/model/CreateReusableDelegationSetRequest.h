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
   */
  class CreateReusableDelegationSetRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateReusableDelegationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReusableDelegationSet"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example a date/time stamp.</p>
     */
    inline CreateReusableDelegationSetRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>If you want to mark the delegation set for an existing hosted zone as
     * reusable, the ID for that hosted zone.</p>
     */
    inline CreateReusableDelegationSetRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
