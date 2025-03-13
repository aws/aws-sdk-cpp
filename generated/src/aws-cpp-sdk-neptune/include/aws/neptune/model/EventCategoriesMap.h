/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the results of a successful invocation of the
   * <a>DescribeEventCategories</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/EventCategoriesMap">AWS
   * API Reference</a></p>
   */
  class EventCategoriesMap
  {
  public:
    AWS_NEPTUNE_API EventCategoriesMap() = default;
    AWS_NEPTUNE_API EventCategoriesMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API EventCategoriesMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    EventCategoriesMap& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event categories for the specified source type</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const { return m_eventCategories; }
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    void SetEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::forward<EventCategoriesT>(value); }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    EventCategoriesMap& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    EventCategoriesMap& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
