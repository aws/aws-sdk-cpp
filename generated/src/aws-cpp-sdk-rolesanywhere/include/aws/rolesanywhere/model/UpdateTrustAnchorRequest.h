/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/Source.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class UpdateTrustAnchorRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API UpdateTrustAnchorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustAnchor"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


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
    inline UpdateTrustAnchorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline UpdateTrustAnchorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trust anchor.</p>
     */
    inline UpdateTrustAnchorRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateTrustAnchorRequest& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline UpdateTrustAnchorRequest& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


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
    inline UpdateTrustAnchorRequest& WithTrustAnchorId(const Aws::String& value) { SetTrustAnchorId(value); return *this;}

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline UpdateTrustAnchorRequest& WithTrustAnchorId(Aws::String&& value) { SetTrustAnchorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline UpdateTrustAnchorRequest& WithTrustAnchorId(const char* value) { SetTrustAnchorId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_trustAnchorId;
    bool m_trustAnchorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
