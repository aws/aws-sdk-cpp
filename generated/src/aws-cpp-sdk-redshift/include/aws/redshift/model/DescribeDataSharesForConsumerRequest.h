/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/DataShareStatusForConsumer.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeDataSharesForConsumerRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeDataSharesForConsumerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataSharesForConsumer"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumer namespace that returns in the
     * list of datashares.</p>
     */
    inline const Aws::String& GetConsumerArn() const { return m_consumerArn; }
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }
    template<typename ConsumerArnT = Aws::String>
    void SetConsumerArn(ConsumerArnT&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::forward<ConsumerArnT>(value); }
    template<typename ConsumerArnT = Aws::String>
    DescribeDataSharesForConsumerRequest& WithConsumerArn(ConsumerArnT&& value) { SetConsumerArn(std::forward<ConsumerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier giving the status of a datashare in the consumer cluster. If
     * this field is specified, Amazon Redshift returns the list of datashares that
     * have the specified status.</p>
     */
    inline DataShareStatusForConsumer GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataShareStatusForConsumer value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDataSharesForConsumerRequest& WithStatus(DataShareStatusForConsumer value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDataSharesForConsumerRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForConsumer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDataSharesForConsumerRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet = false;

    DataShareStatusForConsumer m_status{DataShareStatusForConsumer::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
