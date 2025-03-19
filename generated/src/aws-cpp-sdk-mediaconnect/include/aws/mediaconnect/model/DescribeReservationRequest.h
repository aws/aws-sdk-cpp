/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DescribeReservationRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DescribeReservationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservation"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the offering. </p>
     */
    inline const Aws::String& GetReservationArn() const { return m_reservationArn; }
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }
    template<typename ReservationArnT = Aws::String>
    void SetReservationArn(ReservationArnT&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::forward<ReservationArnT>(value); }
    template<typename ReservationArnT = Aws::String>
    DescribeReservationRequest& WithReservationArn(ReservationArnT&& value) { SetReservationArn(std::forward<ReservationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
