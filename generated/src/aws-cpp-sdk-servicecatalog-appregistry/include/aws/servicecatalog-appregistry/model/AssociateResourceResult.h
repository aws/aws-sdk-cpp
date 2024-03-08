/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog-appregistry/model/AssociationOption.h>
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


    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline const Aws::Vector<AssociationOption>& GetOptions() const{ return m_options; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(const Aws::Vector<AssociationOption>& value) { m_options = value; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline void SetOptions(Aws::Vector<AssociationOption>&& value) { m_options = std::move(value); }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceResult& WithOptions(const Aws::Vector<AssociationOption>& value) { SetOptions(value); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceResult& WithOptions(Aws::Vector<AssociationOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceResult& AddOptions(const AssociationOption& value) { m_options.push_back(value); return *this; }

    /**
     * <p> Determines whether an application tag is applied or skipped. </p>
     */
    inline AssociateResourceResult& AddOptions(AssociationOption&& value) { m_options.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationArn;

    Aws::String m_resourceArn;

    Aws::Vector<AssociationOption> m_options;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
