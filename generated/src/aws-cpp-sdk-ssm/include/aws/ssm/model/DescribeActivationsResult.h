/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Activation.h>
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
namespace SSM
{
namespace Model
{
  class DescribeActivationsResult
  {
  public:
    AWS_SSM_API DescribeActivationsResult();
    AWS_SSM_API DescribeActivationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeActivationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Activation>& GetActivationList() const{ return m_activationList; }

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline void SetActivationList(const Aws::Vector<Activation>& value) { m_activationList = value; }

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline void SetActivationList(Aws::Vector<Activation>&& value) { m_activationList = std::move(value); }

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline DescribeActivationsResult& WithActivationList(const Aws::Vector<Activation>& value) { SetActivationList(value); return *this;}

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline DescribeActivationsResult& WithActivationList(Aws::Vector<Activation>&& value) { SetActivationList(std::move(value)); return *this;}

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline DescribeActivationsResult& AddActivationList(const Activation& value) { m_activationList.push_back(value); return *this; }

    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline DescribeActivationsResult& AddActivationList(Activation&& value) { m_activationList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline DescribeActivationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeActivationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeActivationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeActivationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Activation> m_activationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
