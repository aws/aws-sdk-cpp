/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult();
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeKeyRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration specified in the request.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }
    inline DescribeKeyRegistrationResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DescribeKeyRegistrationResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DescribeKeyRegistrationResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RegisteredCustomerManagedKey</code> objects in a Amazon
     * QuickSight account.</p>
     */
    inline const Aws::Vector<RegisteredCustomerManagedKey>& GetKeyRegistration() const{ return m_keyRegistration; }
    inline void SetKeyRegistration(const Aws::Vector<RegisteredCustomerManagedKey>& value) { m_keyRegistration = value; }
    inline void SetKeyRegistration(Aws::Vector<RegisteredCustomerManagedKey>&& value) { m_keyRegistration = std::move(value); }
    inline DescribeKeyRegistrationResult& WithKeyRegistration(const Aws::Vector<RegisteredCustomerManagedKey>& value) { SetKeyRegistration(value); return *this;}
    inline DescribeKeyRegistrationResult& WithKeyRegistration(Aws::Vector<RegisteredCustomerManagedKey>&& value) { SetKeyRegistration(std::move(value)); return *this;}
    inline DescribeKeyRegistrationResult& AddKeyRegistration(const RegisteredCustomerManagedKey& value) { m_keyRegistration.push_back(value); return *this; }
    inline DescribeKeyRegistrationResult& AddKeyRegistration(RegisteredCustomerManagedKey&& value) { m_keyRegistration.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeKeyRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeKeyRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeKeyRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeKeyRegistrationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;

    Aws::Vector<RegisteredCustomerManagedKey> m_keyRegistration;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
