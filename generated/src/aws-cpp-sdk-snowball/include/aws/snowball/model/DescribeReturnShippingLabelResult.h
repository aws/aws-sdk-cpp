/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingLabelStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Snowball
{
namespace Model
{
  class DescribeReturnShippingLabelResult
  {
  public:
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult();
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline const ShippingLabelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline void SetStatus(const ShippingLabelStatus& value) { m_status = value; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline void SetStatus(ShippingLabelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline DescribeReturnShippingLabelResult& WithStatus(const ShippingLabelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline DescribeReturnShippingLabelResult& WithStatus(ShippingLabelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline const Aws::String& GetReturnShippingLabelURI() const{ return m_returnShippingLabelURI; }

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline void SetReturnShippingLabelURI(const Aws::String& value) { m_returnShippingLabelURI = value; }

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline void SetReturnShippingLabelURI(Aws::String&& value) { m_returnShippingLabelURI = std::move(value); }

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline void SetReturnShippingLabelURI(const char* value) { m_returnShippingLabelURI.assign(value); }

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithReturnShippingLabelURI(const Aws::String& value) { SetReturnShippingLabelURI(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithReturnShippingLabelURI(Aws::String&& value) { SetReturnShippingLabelURI(std::move(value)); return *this;}

    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithReturnShippingLabelURI(const char* value) { SetReturnShippingLabelURI(value); return *this;}

  private:

    ShippingLabelStatus m_status;

    Aws::Utils::DateTime m_expirationDate;

    Aws::String m_returnShippingLabelURI;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
