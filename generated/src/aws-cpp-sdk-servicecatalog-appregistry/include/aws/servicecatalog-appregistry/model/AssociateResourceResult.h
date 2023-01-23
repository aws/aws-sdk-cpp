/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
  class AssociateResourceResult
  {
  public:
    AWS_APPREGISTRY_API AssociateResourceResult();
    AWS_APPREGISTRY_API AssociateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API AssociateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateResourceResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateResourceResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the application that was augmented with
     * attributes.</p>
     */
    inline AssociateResourceResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline AssociateResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline AssociateResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline AssociateResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_resourceArn;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
