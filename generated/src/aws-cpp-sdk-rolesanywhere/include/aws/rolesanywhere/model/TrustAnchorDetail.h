/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/Source.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the trust anchor after a read or write operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TrustAnchorDetail">AWS
   * API Reference</a></p>
   */
  class TrustAnchorDetail
  {
  public:
    AWS_ROLESANYWHERE_API TrustAnchorDetail();
    AWS_ROLESANYWHERE_API TrustAnchorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API TrustAnchorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline TrustAnchorDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline TrustAnchorDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the trust anchor is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the trust anchor is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the trust anchor is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the trust anchor is enabled.</p>
     */
    inline TrustAnchorDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the trust anchor.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline TrustAnchorDetail& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline TrustAnchorDetail& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorArn() const{ return m_trustAnchorArn; }

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline void SetTrustAnchorArn(const Aws::String& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = value; }

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline void SetTrustAnchorArn(Aws::String&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::move(value); }

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline void SetTrustAnchorArn(const char* value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn.assign(value); }

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorArn(const Aws::String& value) { SetTrustAnchorArn(value); return *this;}

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorArn(Aws::String&& value) { SetTrustAnchorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorArn(const char* value) { SetTrustAnchorArn(value); return *this;}


    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorId() const{ return m_trustAnchorId; }

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline void SetTrustAnchorId(const Aws::String& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = value; }

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline void SetTrustAnchorId(Aws::String&& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = std::move(value); }

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline void SetTrustAnchorId(const char* value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId.assign(value); }

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorId(const Aws::String& value) { SetTrustAnchorId(value); return *this;}

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorId(Aws::String&& value) { SetTrustAnchorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline TrustAnchorDetail& WithTrustAnchorId(const char* value) { SetTrustAnchorId(value); return *this;}


    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline TrustAnchorDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline TrustAnchorDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;

    Aws::String m_trustAnchorId;
    bool m_trustAnchorIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
