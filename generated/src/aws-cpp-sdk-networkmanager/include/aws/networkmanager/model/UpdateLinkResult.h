/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Link.h>
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
namespace NetworkManager
{
namespace Model
{
  class UpdateLinkResult
  {
  public:
    AWS_NETWORKMANAGER_API UpdateLinkResult();
    AWS_NETWORKMANAGER_API UpdateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API UpdateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the link.</p>
     */
    inline const Link& GetLink() const{ return m_link; }

    /**
     * <p>Information about the link.</p>
     */
    inline void SetLink(const Link& value) { m_link = value; }

    /**
     * <p>Information about the link.</p>
     */
    inline void SetLink(Link&& value) { m_link = std::move(value); }

    /**
     * <p>Information about the link.</p>
     */
    inline UpdateLinkResult& WithLink(const Link& value) { SetLink(value); return *this;}

    /**
     * <p>Information about the link.</p>
     */
    inline UpdateLinkResult& WithLink(Link&& value) { SetLink(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Link m_link;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
