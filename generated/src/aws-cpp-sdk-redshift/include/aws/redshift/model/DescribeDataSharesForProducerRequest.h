/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/DataShareStatusForProducer.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeDataSharesForProducerRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeDataSharesForProducerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataSharesForProducer"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline const Aws::String& GetProducerArn() const{ return m_producerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline bool ProducerArnHasBeenSet() const { return m_producerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline void SetProducerArn(const Aws::String& value) { m_producerArnHasBeenSet = true; m_producerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline void SetProducerArn(Aws::String&& value) { m_producerArnHasBeenSet = true; m_producerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline void SetProducerArn(const char* value) { m_producerArnHasBeenSet = true; m_producerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline DescribeDataSharesForProducerRequest& WithProducerArn(const Aws::String& value) { SetProducerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline DescribeDataSharesForProducerRequest& WithProducerArn(Aws::String&& value) { SetProducerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer that returns in the list of
     * datashares.</p>
     */
    inline DescribeDataSharesForProducerRequest& WithProducerArn(const char* value) { SetProducerArn(value); return *this;}


    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline const DataShareStatusForProducer& GetStatus() const{ return m_status; }

    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline void SetStatus(const DataShareStatusForProducer& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline void SetStatus(DataShareStatusForProducer&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline DescribeDataSharesForProducerRequest& WithStatus(const DataShareStatusForProducer& value) { SetStatus(value); return *this;}

    /**
     * <p>An identifier giving the status of a datashare in the producer. If this field
     * is specified, Amazon Redshift returns the list of datashares that have the
     * specified status.</p>
     */
    inline DescribeDataSharesForProducerRequest& WithStatus(DataShareStatusForProducer&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p>
     */
    inline DescribeDataSharesForProducerRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesForProducerRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesForProducerRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeDataSharesForProducer</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeDataSharesForProducerRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_producerArn;
    bool m_producerArnHasBeenSet = false;

    DataShareStatusForProducer m_status;
    bool m_statusHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
