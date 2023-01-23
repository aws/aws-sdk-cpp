/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/ChangeBatch.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains change information for the resource record
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeResourceRecordSetsRequest">AWS
   * API Reference</a></p>
   */
  class ChangeResourceRecordSetsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ChangeResourceRecordSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeResourceRecordSets"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline ChangeResourceRecordSetsRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline ChangeResourceRecordSetsRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline ChangeResourceRecordSetsRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}


    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline const ChangeBatch& GetChangeBatch() const{ return m_changeBatch; }

    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline bool ChangeBatchHasBeenSet() const { return m_changeBatchHasBeenSet; }

    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline void SetChangeBatch(const ChangeBatch& value) { m_changeBatchHasBeenSet = true; m_changeBatch = value; }

    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline void SetChangeBatch(ChangeBatch&& value) { m_changeBatchHasBeenSet = true; m_changeBatch = std::move(value); }

    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline ChangeResourceRecordSetsRequest& WithChangeBatch(const ChangeBatch& value) { SetChangeBatch(value); return *this;}

    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline ChangeResourceRecordSetsRequest& WithChangeBatch(ChangeBatch&& value) { SetChangeBatch(std::move(value)); return *this;}

  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    ChangeBatch m_changeBatch;
    bool m_changeBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
