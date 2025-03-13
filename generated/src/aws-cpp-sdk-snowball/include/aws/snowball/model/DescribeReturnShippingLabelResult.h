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
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult() = default;
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeReturnShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * Amazon Web Services.</p>
     */
    inline ShippingLabelStatus GetStatus() const { return m_status; }
    inline void SetStatus(ShippingLabelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeReturnShippingLabelResult& WithStatus(ShippingLabelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    DescribeReturnShippingLabelResult& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed Amazon S3 URI used to download the return shipping label.</p>
     */
    inline const Aws::String& GetReturnShippingLabelURI() const { return m_returnShippingLabelURI; }
    template<typename ReturnShippingLabelURIT = Aws::String>
    void SetReturnShippingLabelURI(ReturnShippingLabelURIT&& value) { m_returnShippingLabelURIHasBeenSet = true; m_returnShippingLabelURI = std::forward<ReturnShippingLabelURIT>(value); }
    template<typename ReturnShippingLabelURIT = Aws::String>
    DescribeReturnShippingLabelResult& WithReturnShippingLabelURI(ReturnShippingLabelURIT&& value) { SetReturnShippingLabelURI(std::forward<ReturnShippingLabelURIT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReturnShippingLabelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ShippingLabelStatus m_status{ShippingLabelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_returnShippingLabelURI;
    bool m_returnShippingLabelURIHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
