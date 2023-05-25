/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NamespaceStatus.h>
#include <aws/quicksight/model/IdentityStore.h>
#include <aws/quicksight/model/NamespaceError.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The error type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamespaceInfoV2">AWS
   * API Reference</a></p>
   */
  class NamespaceInfoV2
  {
  public:
    AWS_QUICKSIGHT_API NamespaceInfoV2();
    AWS_QUICKSIGHT_API NamespaceInfoV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamespaceInfoV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the error.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the error.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the error.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the error.</p>
     */
    inline NamespaceInfoV2& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the error.</p>
     */
    inline NamespaceInfoV2& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the error.</p>
     */
    inline NamespaceInfoV2& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The namespace ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The namespace ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The namespace ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The namespace ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The namespace ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The namespace ARN.</p>
     */
    inline NamespaceInfoV2& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The namespace ARN.</p>
     */
    inline NamespaceInfoV2& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The namespace ARN.</p>
     */
    inline NamespaceInfoV2& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetCapacityRegion() const{ return m_capacityRegion; }

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline bool CapacityRegionHasBeenSet() const { return m_capacityRegionHasBeenSet; }

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline void SetCapacityRegion(const Aws::String& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = value; }

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline void SetCapacityRegion(Aws::String&& value) { m_capacityRegionHasBeenSet = true; m_capacityRegion = std::move(value); }

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline void SetCapacityRegion(const char* value) { m_capacityRegionHasBeenSet = true; m_capacityRegion.assign(value); }

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline NamespaceInfoV2& WithCapacityRegion(const Aws::String& value) { SetCapacityRegion(value); return *this;}

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline NamespaceInfoV2& WithCapacityRegion(Aws::String&& value) { SetCapacityRegion(std::move(value)); return *this;}

    /**
     * <p>The namespace Amazon Web Services Region.</p>
     */
    inline NamespaceInfoV2& WithCapacityRegion(const char* value) { SetCapacityRegion(value); return *this;}


    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline const NamespaceStatus& GetCreationStatus() const{ return m_creationStatus; }

    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline bool CreationStatusHasBeenSet() const { return m_creationStatusHasBeenSet; }

    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline void SetCreationStatus(const NamespaceStatus& value) { m_creationStatusHasBeenSet = true; m_creationStatus = value; }

    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline void SetCreationStatus(NamespaceStatus&& value) { m_creationStatusHasBeenSet = true; m_creationStatus = std::move(value); }

    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline NamespaceInfoV2& WithCreationStatus(const NamespaceStatus& value) { SetCreationStatus(value); return *this;}

    /**
     * <p>The creation status of a namespace that is not yet completely created.</p>
     */
    inline NamespaceInfoV2& WithCreationStatus(NamespaceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}


    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline const IdentityStore& GetIdentityStore() const{ return m_identityStore; }

    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline bool IdentityStoreHasBeenSet() const { return m_identityStoreHasBeenSet; }

    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline void SetIdentityStore(const IdentityStore& value) { m_identityStoreHasBeenSet = true; m_identityStore = value; }

    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline void SetIdentityStore(IdentityStore&& value) { m_identityStoreHasBeenSet = true; m_identityStore = std::move(value); }

    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline NamespaceInfoV2& WithIdentityStore(const IdentityStore& value) { SetIdentityStore(value); return *this;}

    /**
     * <p>The identity store used for the namespace.</p>
     */
    inline NamespaceInfoV2& WithIdentityStore(IdentityStore&& value) { SetIdentityStore(std::move(value)); return *this;}


    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline const NamespaceError& GetNamespaceError() const{ return m_namespaceError; }

    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline bool NamespaceErrorHasBeenSet() const { return m_namespaceErrorHasBeenSet; }

    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline void SetNamespaceError(const NamespaceError& value) { m_namespaceErrorHasBeenSet = true; m_namespaceError = value; }

    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline void SetNamespaceError(NamespaceError&& value) { m_namespaceErrorHasBeenSet = true; m_namespaceError = std::move(value); }

    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline NamespaceInfoV2& WithNamespaceError(const NamespaceError& value) { SetNamespaceError(value); return *this;}

    /**
     * <p>An error that occurred when the namespace was created.</p>
     */
    inline NamespaceInfoV2& WithNamespaceError(NamespaceError&& value) { SetNamespaceError(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_capacityRegion;
    bool m_capacityRegionHasBeenSet = false;

    NamespaceStatus m_creationStatus;
    bool m_creationStatusHasBeenSet = false;

    IdentityStore m_identityStore;
    bool m_identityStoreHasBeenSet = false;

    NamespaceError m_namespaceError;
    bool m_namespaceErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
