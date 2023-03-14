/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityControlDefinition.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListSecurityControlDefinitionsResult
  {
  public:
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult();
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListSecurityControlDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline const Aws::Vector<SecurityControlDefinition>& GetSecurityControlDefinitions() const{ return m_securityControlDefinitions; }

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline void SetSecurityControlDefinitions(const Aws::Vector<SecurityControlDefinition>& value) { m_securityControlDefinitions = value; }

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline void SetSecurityControlDefinitions(Aws::Vector<SecurityControlDefinition>&& value) { m_securityControlDefinitions = std::move(value); }

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline ListSecurityControlDefinitionsResult& WithSecurityControlDefinitions(const Aws::Vector<SecurityControlDefinition>& value) { SetSecurityControlDefinitions(value); return *this;}

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline ListSecurityControlDefinitionsResult& WithSecurityControlDefinitions(Aws::Vector<SecurityControlDefinition>&& value) { SetSecurityControlDefinitions(std::move(value)); return *this;}

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline ListSecurityControlDefinitionsResult& AddSecurityControlDefinitions(const SecurityControlDefinition& value) { m_securityControlDefinitions.push_back(value); return *this; }

    /**
     * <p> An array of controls that apply to the specified standard. </p>
     */
    inline ListSecurityControlDefinitionsResult& AddSecurityControlDefinitions(SecurityControlDefinition&& value) { m_securityControlDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListSecurityControlDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListSecurityControlDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination parameter that's included in the response only if it was
     * included in the request. </p>
     */
    inline ListSecurityControlDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSecurityControlDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSecurityControlDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSecurityControlDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SecurityControlDefinition> m_securityControlDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
