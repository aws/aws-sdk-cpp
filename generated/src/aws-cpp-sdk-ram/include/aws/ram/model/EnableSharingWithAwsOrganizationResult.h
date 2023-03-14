/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
namespace RAM
{
namespace Model
{
  class EnableSharingWithAwsOrganizationResult
  {
  public:
    AWS_RAM_API EnableSharingWithAwsOrganizationResult();
    AWS_RAM_API EnableSharingWithAwsOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API EnableSharingWithAwsOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline EnableSharingWithAwsOrganizationResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline EnableSharingWithAwsOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline EnableSharingWithAwsOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline EnableSharingWithAwsOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_returnValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
