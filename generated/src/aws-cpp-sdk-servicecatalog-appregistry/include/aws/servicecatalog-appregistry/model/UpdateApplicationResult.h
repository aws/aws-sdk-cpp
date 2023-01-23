/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/Application.h>
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
  class UpdateApplicationResult
  {
  public:
    AWS_APPREGISTRY_API UpdateApplicationResult();
    AWS_APPREGISTRY_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated information of the application.</p>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p>The updated information of the application.</p>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p>The updated information of the application.</p>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p>The updated information of the application.</p>
     */
    inline UpdateApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p>The updated information of the application.</p>
     */
    inline UpdateApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}

  private:

    Application m_application;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
