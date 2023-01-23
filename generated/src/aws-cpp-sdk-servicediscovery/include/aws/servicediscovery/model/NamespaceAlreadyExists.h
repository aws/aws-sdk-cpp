/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>The namespace that you're trying to create already exists.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceAlreadyExists">AWS
   * API Reference</a></p>
   */
  class NamespaceAlreadyExists
  {
  public:
    AWS_SERVICEDISCOVERY_API NamespaceAlreadyExists();
    AWS_SERVICEDISCOVERY_API NamespaceAlreadyExists(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API NamespaceAlreadyExists& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline NamespaceAlreadyExists& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline NamespaceAlreadyExists& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline NamespaceAlreadyExists& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline NamespaceAlreadyExists& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline NamespaceAlreadyExists& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>The <code>CreatorRequestId</code> that was used to create the namespace.</p>
     */
    inline NamespaceAlreadyExists& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline bool NamespaceIdHasBeenSet() const { return m_namespaceIdHasBeenSet; }

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline NamespaceAlreadyExists& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline NamespaceAlreadyExists& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the existing namespace.</p>
     */
    inline NamespaceAlreadyExists& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
