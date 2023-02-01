/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/DateTime.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>A structure that describes a property of a resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/ResourceProperty">AWS
   * API Reference</a></p>
   */
  class ResourceProperty
  {
  public:
    AWS_RESOURCEEXPLORER2_API ResourceProperty();
    AWS_RESOURCEEXPLORER2_API ResourceProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API ResourceProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline Aws::Utils::DocumentView GetData() const{ return m_data; }

    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline void SetData(const Aws::Utils::Document& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline void SetData(Aws::Utils::Document&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline ResourceProperty& WithData(const Aws::Utils::Document& value) { SetData(value); return *this;}

    /**
     * <p>Details about this property. The content of this field is a JSON object that
     * varies based on the resource type.</p>
     */
    inline ResourceProperty& WithData(Aws::Utils::Document&& value) { SetData(std::move(value)); return *this;}


    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReportedAt() const{ return m_lastReportedAt; }

    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline bool LastReportedAtHasBeenSet() const { return m_lastReportedAtHasBeenSet; }

    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline void SetLastReportedAt(const Aws::Utils::DateTime& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = value; }

    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline void SetLastReportedAt(Aws::Utils::DateTime&& value) { m_lastReportedAtHasBeenSet = true; m_lastReportedAt = std::move(value); }

    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline ResourceProperty& WithLastReportedAt(const Aws::Utils::DateTime& value) { SetLastReportedAt(value); return *this;}

    /**
     * <p>The date and time that the information about this resource property was last
     * updated.</p>
     */
    inline ResourceProperty& WithLastReportedAt(Aws::Utils::DateTime&& value) { SetLastReportedAt(std::move(value)); return *this;}


    /**
     * <p>The name of this property of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline ResourceProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline ResourceProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this property of the resource.</p>
     */
    inline ResourceProperty& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Utils::Document m_data;
    bool m_dataHasBeenSet = false;

    Aws::Utils::DateTime m_lastReportedAt;
    bool m_lastReportedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
