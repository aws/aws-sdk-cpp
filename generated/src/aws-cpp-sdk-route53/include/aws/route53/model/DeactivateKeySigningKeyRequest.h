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
  class DeactivateKeySigningKeyRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API DeactivateKeySigningKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeactivateKeySigningKey"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline DeactivateKeySigningKeyRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline DeactivateKeySigningKeyRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>A unique string used to identify a hosted zone.</p>
     */
    inline DeactivateKeySigningKeyRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline DeactivateKeySigningKeyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline DeactivateKeySigningKeyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK).</p>
     */
    inline DeactivateKeySigningKeyRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
