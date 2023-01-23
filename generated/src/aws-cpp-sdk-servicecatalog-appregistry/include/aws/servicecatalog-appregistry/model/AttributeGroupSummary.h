/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p>Summary of a Amazon Web Services Service Catalog AppRegistry attribute
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AttributeGroupSummary">AWS
   * API Reference</a></p>
   */
  class AttributeGroupSummary
  {
  public:
    AWS_APPREGISTRY_API AttributeGroupSummary();
    AWS_APPREGISTRY_API AttributeGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API AttributeGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The globally unique attribute group identifier of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline AttributeGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline AttributeGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group across
     * services.</p>
     */
    inline AttributeGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the attribute group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute group.</p>
     */
    inline AttributeGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline AttributeGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline AttributeGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline AttributeGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline AttributeGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was
     * created.</p>
     */
    inline AttributeGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline AttributeGroupSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The ISO-8601 formatted timestamp of the moment the attribute group was last
     * updated. This time is the same as the creationTime for a newly created attribute
     * group.</p>
     */
    inline AttributeGroupSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
