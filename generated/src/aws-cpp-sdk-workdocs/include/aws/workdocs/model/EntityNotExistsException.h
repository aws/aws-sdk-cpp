/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>The resource does not exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/EntityNotExistsException">AWS
   * API Reference</a></p>
   */
  class EntityNotExistsException
  {
  public:
    AWS_WORKDOCS_API EntityNotExistsException() = default;
    AWS_WORKDOCS_API EntityNotExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API EntityNotExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EntityNotExistsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the non-existent resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIds() const { return m_entityIds; }
    inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }
    template<typename EntityIdsT = Aws::Vector<Aws::String>>
    void SetEntityIds(EntityIdsT&& value) { m_entityIdsHasBeenSet = true; m_entityIds = std::forward<EntityIdsT>(value); }
    template<typename EntityIdsT = Aws::Vector<Aws::String>>
    EntityNotExistsException& WithEntityIds(EntityIdsT&& value) { SetEntityIds(std::forward<EntityIdsT>(value)); return *this;}
    template<typename EntityIdsT = Aws::String>
    EntityNotExistsException& AddEntityIds(EntityIdsT&& value) { m_entityIdsHasBeenSet = true; m_entityIds.emplace_back(std::forward<EntityIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityIds;
    bool m_entityIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
