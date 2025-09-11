/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/QDataKey.h>
#include <aws/quicksight/model/RegisteredCustomerManagedKey.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeKeyRegistrationResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult() = default;
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration specified in the request.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeKeyRegistrationResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RegisteredCustomerManagedKey</code> objects in a QuickSight
     * account.</p>
     */
    inline const Aws::Vector<RegisteredCustomerManagedKey>& GetKeyRegistration() const { return m_keyRegistration; }
    template<typename KeyRegistrationT = Aws::Vector<RegisteredCustomerManagedKey>>
    void SetKeyRegistration(KeyRegistrationT&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration = std::forward<KeyRegistrationT>(value); }
    template<typename KeyRegistrationT = Aws::Vector<RegisteredCustomerManagedKey>>
    DescribeKeyRegistrationResult& WithKeyRegistration(KeyRegistrationT&& value) { SetKeyRegistration(std::forward<KeyRegistrationT>(value)); return *this;}
    template<typename KeyRegistrationT = RegisteredCustomerManagedKey>
    DescribeKeyRegistrationResult& AddKeyRegistration(KeyRegistrationT&& value) { m_keyRegistrationHasBeenSet = true; m_keyRegistration.emplace_back(std::forward<KeyRegistrationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>QDataKey</code> objects in a QuickSight account.</p>
     */
    inline const QDataKey& GetQDataKey() const { return m_qDataKey; }
    template<typename QDataKeyT = QDataKey>
    void SetQDataKey(QDataKeyT&& value) { m_qDataKeyHasBeenSet = true; m_qDataKey = std::forward<QDataKeyT>(value); }
    template<typename QDataKeyT = QDataKey>
    DescribeKeyRegistrationResult& WithQDataKey(QDataKeyT&& value) { SetQDataKey(std::forward<QDataKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeKeyRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeKeyRegistrationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<RegisteredCustomerManagedKey> m_keyRegistration;
    bool m_keyRegistrationHasBeenSet = false;

    QDataKey m_qDataKey;
    bool m_qDataKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
