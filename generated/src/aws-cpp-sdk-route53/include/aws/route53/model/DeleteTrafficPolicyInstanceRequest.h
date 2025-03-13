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
   * <p>A request to delete a specified traffic policy instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteTrafficPolicyInstanceRequest">AWS
   * API Reference</a></p>
   */
  class DeleteTrafficPolicyInstanceRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API DeleteTrafficPolicyInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTrafficPolicyInstance"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the traffic policy instance that you want to delete. </p>
     *  <p>When you delete a traffic policy instance, Amazon Route 53 also
     * deletes all of the resource record sets that were created when you created the
     * traffic policy instance.</p> 
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteTrafficPolicyInstanceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
