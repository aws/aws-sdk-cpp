﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AutomaticTapeCreationPolicyInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  class ListAutomaticTapeCreationPoliciesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult();
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListAutomaticTapeCreationPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline const Aws::Vector<AutomaticTapeCreationPolicyInfo>& GetAutomaticTapeCreationPolicyInfos() const{ return m_automaticTapeCreationPolicyInfos; }

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline void SetAutomaticTapeCreationPolicyInfos(const Aws::Vector<AutomaticTapeCreationPolicyInfo>& value) { m_automaticTapeCreationPolicyInfos = value; }

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline void SetAutomaticTapeCreationPolicyInfos(Aws::Vector<AutomaticTapeCreationPolicyInfo>&& value) { m_automaticTapeCreationPolicyInfos = std::move(value); }

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline ListAutomaticTapeCreationPoliciesResult& WithAutomaticTapeCreationPolicyInfos(const Aws::Vector<AutomaticTapeCreationPolicyInfo>& value) { SetAutomaticTapeCreationPolicyInfos(value); return *this;}

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline ListAutomaticTapeCreationPoliciesResult& WithAutomaticTapeCreationPolicyInfos(Aws::Vector<AutomaticTapeCreationPolicyInfo>&& value) { SetAutomaticTapeCreationPolicyInfos(std::move(value)); return *this;}

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline ListAutomaticTapeCreationPoliciesResult& AddAutomaticTapeCreationPolicyInfos(const AutomaticTapeCreationPolicyInfo& value) { m_automaticTapeCreationPolicyInfos.push_back(value); return *this; }

    /**
     * <p>Gets a listing of information about the gateway's automatic tape creation
     * policies, including the automatic tape creation rules and the gateway that is
     * using the policies.</p>
     */
    inline ListAutomaticTapeCreationPoliciesResult& AddAutomaticTapeCreationPolicyInfos(AutomaticTapeCreationPolicyInfo&& value) { m_automaticTapeCreationPolicyInfos.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAutomaticTapeCreationPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAutomaticTapeCreationPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAutomaticTapeCreationPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AutomaticTapeCreationPolicyInfo> m_automaticTapeCreationPolicyInfos;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
