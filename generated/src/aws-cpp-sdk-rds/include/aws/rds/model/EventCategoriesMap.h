/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the results of a successful invocation of the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeEventCategories.html">DescribeEventCategories</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EventCategoriesMap">AWS
   * API Reference</a></p>
   */
  class EventCategoriesMap
  {
  public:
    AWS_RDS_API EventCategoriesMap();
    AWS_RDS_API EventCategoriesMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API EventCategoriesMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline EventCategoriesMap& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline EventCategoriesMap& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type that the returned categories belong to</p>
     */
    inline EventCategoriesMap& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The event categories for the specified source type</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline EventCategoriesMap& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline EventCategoriesMap& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline EventCategoriesMap& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline EventCategoriesMap& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>The event categories for the specified source type</p>
     */
    inline EventCategoriesMap& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
