/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
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
namespace MarketplaceDeployment
{
namespace Model
{

  /**
   * <p>The request configuration has conflicts. For details, see the accompanying
   * error message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_MARKETPLACEDEPLOYMENT_API ConflictException();
    AWS_MARKETPLACEDEPLOYMENT_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the resource associated with the error.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
