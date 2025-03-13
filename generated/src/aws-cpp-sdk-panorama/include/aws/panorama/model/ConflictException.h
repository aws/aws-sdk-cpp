/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/ConflictExceptionErrorArgument.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>The target resource is in use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_PANORAMA_API ConflictException() = default;
    AWS_PANORAMA_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of attributes that led to the exception and their values.</p>
     */
    inline const Aws::Vector<ConflictExceptionErrorArgument>& GetErrorArguments() const { return m_errorArguments; }
    inline bool ErrorArgumentsHasBeenSet() const { return m_errorArgumentsHasBeenSet; }
    template<typename ErrorArgumentsT = Aws::Vector<ConflictExceptionErrorArgument>>
    void SetErrorArguments(ErrorArgumentsT&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments = std::forward<ErrorArgumentsT>(value); }
    template<typename ErrorArgumentsT = Aws::Vector<ConflictExceptionErrorArgument>>
    ConflictException& WithErrorArguments(ErrorArgumentsT&& value) { SetErrorArguments(std::forward<ErrorArgumentsT>(value)); return *this;}
    template<typename ErrorArgumentsT = ConflictExceptionErrorArgument>
    ConflictException& AddErrorArguments(ErrorArgumentsT&& value) { m_errorArgumentsHasBeenSet = true; m_errorArguments.emplace_back(std::forward<ErrorArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique ID for the error.</p>
     */
    inline const Aws::String& GetErrorId() const { return m_errorId; }
    inline bool ErrorIdHasBeenSet() const { return m_errorIdHasBeenSet; }
    template<typename ErrorIdT = Aws::String>
    void SetErrorId(ErrorIdT&& value) { m_errorIdHasBeenSet = true; m_errorId = std::forward<ErrorIdT>(value); }
    template<typename ErrorIdT = Aws::String>
    ConflictException& WithErrorId(ErrorIdT&& value) { SetErrorId(std::forward<ErrorIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's ID.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ConflictException& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ConflictException& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConflictExceptionErrorArgument> m_errorArguments;
    bool m_errorArgumentsHasBeenSet = false;

    Aws::String m_errorId;
    bool m_errorIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
