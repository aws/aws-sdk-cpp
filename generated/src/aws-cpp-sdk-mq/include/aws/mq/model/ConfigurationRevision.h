/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Returns information about the specified configuration revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConfigurationRevision">AWS
   * API Reference</a></p>
   */
  class ConfigurationRevision
  {
  public:
    AWS_MQ_API ConfigurationRevision();
    AWS_MQ_API ConfigurationRevision(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API ConfigurationRevision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required. The date and time of the configuration revision.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline ConfigurationRevision& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline ConfigurationRevision& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configuration revision.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConfigurationRevision& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConfigurationRevision& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConfigurationRevision& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The revision number of the configuration.</p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline ConfigurationRevision& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
