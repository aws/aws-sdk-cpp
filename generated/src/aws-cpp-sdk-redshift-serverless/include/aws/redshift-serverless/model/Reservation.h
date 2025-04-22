/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift-serverless/model/ReservationOffering.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Represents an Amazon Redshift Serverless reservation, which gives you the
   * option to commit to a specified number of Redshift Processing Units (RPUs) for a
   * year at a discount from Serverless on-demand (OD) rates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Reservation">AWS
   * API Reference</a></p>
   */
  class Reservation
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Reservation() = default;
    AWS_REDSHIFTSERVERLESS_API Reservation(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Reservation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Redshift Processing Units (RPUs) to reserve.</p>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline Reservation& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the serverless reservation. This date is one year after the
     * start date that you specify.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    Reservation& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of offering for the reservation. The offering class determines the
     * payment schedule for the reservation.</p>
     */
    inline const ReservationOffering& GetOffering() const { return m_offering; }
    inline bool OfferingHasBeenSet() const { return m_offeringHasBeenSet; }
    template<typename OfferingT = ReservationOffering>
    void SetOffering(OfferingT&& value) { m_offeringHasBeenSet = true; m_offering = std::forward<OfferingT>(value); }
    template<typename OfferingT = ReservationOffering>
    Reservation& WithOffering(OfferingT&& value) { SetOffering(std::forward<OfferingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the serverless
     * reservation.</p>
     */
    inline const Aws::String& GetReservationArn() const { return m_reservationArn; }
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }
    template<typename ReservationArnT = Aws::String>
    void SetReservationArn(ReservationArnT&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::forward<ReservationArnT>(value); }
    template<typename ReservationArnT = Aws::String>
    Reservation& WithReservationArn(ReservationArnT&& value) { SetReservationArn(std::forward<ReservationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier that uniquely identifies the serverless reservation.</p>
     */
    inline const Aws::String& GetReservationId() const { return m_reservationId; }
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }
    template<typename ReservationIdT = Aws::String>
    void SetReservationId(ReservationIdT&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::forward<ReservationIdT>(value); }
    template<typename ReservationIdT = Aws::String>
    Reservation& WithReservationId(ReservationIdT&& value) { SetReservationId(std::forward<ReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the serverless reservation. This is the date you specified
     * for the reservation to start when you created the reservation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    Reservation& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the reservation. Possible values include the following:</p>
     * <ul> <li> <p> <code>payment-pending</code> </p> </li> <li> <p>
     * <code>active</code> </p> </li> <li> <p> <code>payment-failed</code> </p> </li>
     * <li> <p> <code>retired</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Reservation& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    int m_capacity{0};
    bool m_capacityHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    ReservationOffering m_offering;
    bool m_offeringHasBeenSet = false;

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
