/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes a principal for use with Resource Access Manager.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/Principal">AWS API
   * Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_RAM_API Principal();
    AWS_RAM_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the principal.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the principal.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the principal.</p>
     */
    inline Principal& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the principal.</p>
     */
    inline Principal& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the principal.</p>
     */
    inline Principal& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline Principal& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline Principal& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of a resource share the principal is associated with.</p>
     */
    inline Principal& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline Principal& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline Principal& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline Principal& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time when the association was last updated.</p>
     */
    inline Principal& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the principal belongs to the same organization in
     * Organizations as the Amazon Web Services account that owns the resource
     * share.</p>
     */
    inline bool GetExternal() const{ return m_external; }

    /**
     * <p>Indicates whether the principal belongs to the same organization in
     * Organizations as the Amazon Web Services account that owns the resource
     * share.</p>
     */
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }

    /**
     * <p>Indicates whether the principal belongs to the same organization in
     * Organizations as the Amazon Web Services account that owns the resource
     * share.</p>
     */
    inline void SetExternal(bool value) { m_externalHasBeenSet = true; m_external = value; }

    /**
     * <p>Indicates whether the principal belongs to the same organization in
     * Organizations as the Amazon Web Services account that owns the resource
     * share.</p>
     */
    inline Principal& WithExternal(bool value) { SetExternal(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_external;
    bool m_externalHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
