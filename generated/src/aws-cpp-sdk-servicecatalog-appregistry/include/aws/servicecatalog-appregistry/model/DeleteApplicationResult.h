/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ApplicationSummary.h>
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
namespace AppRegistry
{
namespace Model
{
  class DeleteApplicationResult
  {
  public:
    AWS_APPREGISTRY_API DeleteApplicationResult();
    AWS_APPREGISTRY_API DeleteApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API DeleteApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted application.</p>
     */
    inline const ApplicationSummary& GetApplication() const{ return m_application; }

    /**
     * <p>Information about the deleted application.</p>
     */
    inline void SetApplication(const ApplicationSummary& value) { m_application = value; }

    /**
     * <p>Information about the deleted application.</p>
     */
    inline void SetApplication(ApplicationSummary&& value) { m_application = std::move(value); }

    /**
     * <p>Information about the deleted application.</p>
     */
    inline DeleteApplicationResult& WithApplication(const ApplicationSummary& value) { SetApplication(value); return *this;}

    /**
     * <p>Information about the deleted application.</p>
     */
    inline DeleteApplicationResult& WithApplication(ApplicationSummary&& value) { SetApplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApplicationSummary m_application;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
