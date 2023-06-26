/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ResourceTypeNotFound.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The specified resource doesn't exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException();
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline const ResourceTypeNotFound& GetResourceTypeNotFound() const{ return m_resourceTypeNotFound; }

    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline bool ResourceTypeNotFoundHasBeenSet() const { return m_resourceTypeNotFoundHasBeenSet; }

    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline void SetResourceTypeNotFound(const ResourceTypeNotFound& value) { m_resourceTypeNotFoundHasBeenSet = true; m_resourceTypeNotFound = value; }

    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline void SetResourceTypeNotFound(ResourceTypeNotFound&& value) { m_resourceTypeNotFoundHasBeenSet = true; m_resourceTypeNotFound = std::move(value); }

    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline ResourceNotFoundException& WithResourceTypeNotFound(const ResourceTypeNotFound& value) { SetResourceTypeNotFound(value); return *this;}

    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline ResourceNotFoundException& WithResourceTypeNotFound(ResourceTypeNotFound&& value) { SetResourceTypeNotFound(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceTypeNotFound m_resourceTypeNotFound;
    bool m_resourceTypeNotFoundHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
