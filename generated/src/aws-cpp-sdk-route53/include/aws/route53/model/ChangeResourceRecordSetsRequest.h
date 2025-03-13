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
    AWS_ROUTE53_API ChangeResourceRecordSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeResourceRecordSets"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to change.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ChangeResourceRecordSetsRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains an optional comment and the <code>Changes</code>
     * element.</p>
     */
    inline const ChangeBatch& GetChangeBatch() const { return m_changeBatch; }
    inline bool ChangeBatchHasBeenSet() const { return m_changeBatchHasBeenSet; }
    template<typename ChangeBatchT = ChangeBatch>
    void SetChangeBatch(ChangeBatchT&& value) { m_changeBatchHasBeenSet = true; m_changeBatch = std::forward<ChangeBatchT>(value); }
    template<typename ChangeBatchT = ChangeBatch>
    ChangeResourceRecordSetsRequest& WithChangeBatch(ChangeBatchT&& value) { SetChangeBatch(std::forward<ChangeBatchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    ChangeBatch m_changeBatch;
    bool m_changeBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
