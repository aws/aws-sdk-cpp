/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/ResourceConflict.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The request failed because another request to modify a resource occurred at
   * the same.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ConflictException();
    AWS_VERIFIEDPERMISSIONS_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline const Aws::Vector<ResourceConflict>& GetResources() const{ return m_resources; }

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline void SetResources(const Aws::Vector<ResourceConflict>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline void SetResources(Aws::Vector<ResourceConflict>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline ConflictException& WithResources(const Aws::Vector<ResourceConflict>& value) { SetResources(value); return *this;}

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline ConflictException& WithResources(Aws::Vector<ResourceConflict>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline ConflictException& AddResources(const ResourceConflict& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>The list of resources referenced with this failed request.</p>
     */
    inline ConflictException& AddResources(ResourceConflict&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ResourceConflict> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
