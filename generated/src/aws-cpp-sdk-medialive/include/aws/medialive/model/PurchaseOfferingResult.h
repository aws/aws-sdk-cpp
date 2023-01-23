/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Reservation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for PurchaseOfferingResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOfferingResponse">AWS
   * API Reference</a></p>
   */
  class PurchaseOfferingResult
  {
  public:
    AWS_MEDIALIVE_API PurchaseOfferingResult();
    AWS_MEDIALIVE_API PurchaseOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API PurchaseOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Reservation& GetReservation() const{ return m_reservation; }

    
    inline void SetReservation(const Reservation& value) { m_reservation = value; }

    
    inline void SetReservation(Reservation&& value) { m_reservation = std::move(value); }

    
    inline PurchaseOfferingResult& WithReservation(const Reservation& value) { SetReservation(value); return *this;}

    
    inline PurchaseOfferingResult& WithReservation(Reservation&& value) { SetReservation(std::move(value)); return *this;}

  private:

    Reservation m_reservation;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
