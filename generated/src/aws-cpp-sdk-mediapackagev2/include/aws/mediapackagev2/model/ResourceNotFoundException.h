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
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException() = default;
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourceNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource type wasn't found.</p>
     */
    inline ResourceTypeNotFound GetResourceTypeNotFound() const { return m_resourceTypeNotFound; }
    inline bool ResourceTypeNotFoundHasBeenSet() const { return m_resourceTypeNotFoundHasBeenSet; }
    inline void SetResourceTypeNotFound(ResourceTypeNotFound value) { m_resourceTypeNotFoundHasBeenSet = true; m_resourceTypeNotFound = value; }
    inline ResourceNotFoundException& WithResourceTypeNotFound(ResourceTypeNotFound value) { SetResourceTypeNotFound(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceTypeNotFound m_resourceTypeNotFound{ResourceTypeNotFound::NOT_SET};
    bool m_resourceTypeNotFoundHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
