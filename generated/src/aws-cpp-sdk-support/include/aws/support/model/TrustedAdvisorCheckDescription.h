/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The description and metadata for a Trusted Advisor check.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckDescription">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorCheckDescription
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorCheckDescription();
    AWS_SUPPORT_API TrustedAdvisorCheckDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorCheckDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TrustedAdvisorCheckDescription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TrustedAdvisorCheckDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TrustedAdvisorCheckDescription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrustedAdvisorCheckDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrustedAdvisorCheckDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrustedAdvisorCheckDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Trusted Advisor check, which includes the alert
     * criteria and recommended operations (contains HTML markup).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrustedAdvisorCheckDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrustedAdvisorCheckDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrustedAdvisorCheckDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline TrustedAdvisorCheckDescription& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline TrustedAdvisorCheckDescription& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline TrustedAdvisorCheckDescription& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column headings for the data returned by the Trusted Advisor check. The
     * order of the headings corresponds to the order of the data in the
     * <b>Metadata</b> element of the <a>TrustedAdvisorResourceDetail</a> for the
     * check. <b>Metadata</b> contains all the data that is shown in the Excel
     * download, even in those cases where the UI shows just summary data. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Vector<Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Vector<Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline TrustedAdvisorCheckDescription& WithMetadata(const Aws::Vector<Aws::String>& value) { SetMetadata(value); return *this;}
    inline TrustedAdvisorCheckDescription& WithMetadata(Aws::Vector<Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline TrustedAdvisorCheckDescription& AddMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }
    inline TrustedAdvisorCheckDescription& AddMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.push_back(std::move(value)); return *this; }
    inline TrustedAdvisorCheckDescription& AddMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
