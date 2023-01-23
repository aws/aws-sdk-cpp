/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ApplicationSummary.h>
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

  private:

    ApplicationSummary m_application;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
